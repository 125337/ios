@interface MJVoiceInputScentenceParser : NSObject
+ (id)parseSpeechRecognitionScentencesFromResponse:(id)arg1;
+ (id)parseFullSpeechRecognitionScentencesFromResponse:(id)arg1;
+ (id)parseLongSpeechRecognitionScentencesFromResponse:(id)arg1;
+ (id)createCaptionGroupsFromMainCaptionItems:(id)arg1 mainLanguage:(id)arg2;
+ (id)changeCaptionItemsTimeRangeToRelative:(id)arg1 groupStartTime:(struct)arg2;
+ (id)parseScentenceTimeRangesWithWordInfos:(id)arg1 wholeText:(id)arg2 splittingType:(unsigned long long)arg3;
+ (struct)expandLeftForTimeRange:(struct)arg1 previousEndTime:(struct)arg2 expandSeconds:(double)arg3;
+ (struct)expandRightForTimeRange:(struct)arg1 nextStartTime:(struct)arg2 expandSeconds:(double)arg3;
+ (id)expandLeftForCaptionItems:(id)arg1 previousTime:(struct)arg2;
+ (id)expandLeftForCaptionItems:(id)arg1;
+ (id)expandRightForCaptionItems:(id)arg1 nextTime:(struct)arg2;
+ (id)expandLeftForCaptionGroups:(id)arg1;
@end

