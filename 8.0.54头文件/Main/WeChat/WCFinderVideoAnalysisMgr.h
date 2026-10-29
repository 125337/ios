@interface WCFinderVideoAnalysisMgr : NSObject
{
    AVAssetImageGenerator * _coverGenerator; // +0x8
}
+ (unsigned long long)getImageColorfulIndex:(id)arg1;
+ (id)genNewImageGeneratorByVideoPath:(id)arg1;
+ (id)getWeightedByRaw:(id)arg1 curFrequencyDic:(id)arg2 len:(unsigned long long)arg3;
+ (double)getHCRBetweenFrequencyFrom:(id)arg1 frequencyDicJ:(id)arg2;
+ (id)getImageHSVFrequencyDicByImage:(id)arg1;
+ (id)getFrequencyDicBy:(id)arg1;
+ (id)totalFormatValue:(id)arg1;
+ (id)formatRawWCFinderHSVModel:(id)arg1;
+ (id)hsvArray:(id)arg1;
+ (id)convertRGBToHSL:(id)arg1;
- (void)getVideoLensCount:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)coverGenerator;
- (void)setCoverGenerator:(id)arg1;
- (void).cxx_destruct;
@end

