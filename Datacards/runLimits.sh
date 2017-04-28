#!/bin/bash
#cd ../../../../../DiH_13TeV/CMSSW_7_1_5/src/; cmsenv; cd - 
#cmsenv
#cd -
for i in 260 270 300 350 400 450
do
	echo "mass point $i"
	cd /uscms_data/d3/cvernier/4b/HbbHbb_2016/HbbHbb_Run2/Datacards/test/LMR_$i
	text2workspace.py datacard_$i\.txt  -o datacard_$i\.root
	combine -M Asymptotic datacard_$i\.root -m $i  --noFitAsimov -t -1 >   ../LMRSelection_chi2_Regression/CMS_HH4b_$i\_13TeV_asymptoticCLs.out  
	#combine HbbHbb_$i\.txt -M Asymptotic -v2 -t -1 -m $i -n CMSHH4b --rMax 1000 --rMin 0.01 &> CMS_HH4b_$i\_13TeV_asymptoticCLs.out
	mv higgsCombineTest.Asymptotic.mH$i\.root ../LMRSelection_chi2_Regression/CMS_$i\_HH4b_13TeV_asymptoticCLs.root
	# combine -M MaxLikelihoodFit --robustFit=1 --rMin=-5 --rMax=5 -t -1 --plots --out Limits/sig$i bias_study/HbbHbb_$i\.txt &> CMS_HH4b_$i\_13TeV_MaxLikelihood.out	

done

for i in 350 400 450 500 550 600 650 750 800 900 1000 1200
do
        echo "mass point $i"
        cd /uscms_data/d3/cvernier/4b/HbbHbb_2016/HbbHbb_Run2/Datacards/test/MMR_$i
        text2workspace.py datacard_$i\.txt  -o datacard_$i\.root
        combine -M Asymptotic datacard_$i\.root -m $i -t -1  --noFitAsimov &> ../MMRSelection_chi2_Regression/CMS_HH4b_$i\_13TeV_asymptoticCLs.out 
	mv higgsCombineTest.Asymptotic.mH$i\.root ../MMRSelection_chi2_Regression/CMS_$i\_HH4b_13TeV_asymptoticCLs.root
	
done
