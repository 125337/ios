@interface WCFinderLikeEasterEggReporter : NSObject
+ (void)onBubbleTapWithEmoticon:(id)arg1 contentVM:(id)arg2 scene:(int)arg3;
+ (void)onBubbleDisappearWithEmoticon:(id)arg1 appearDate:(id)arg2 disappearReason:(long long)arg3 contentVM:(id)arg4 scene:(int)arg5;
+ (void)onFlippingDisappearWithEmoticon:(id)arg1 disappearReason:(long long)arg2 contentVM:(id)arg3 scene:(int)arg4;
+ (void)_onDisappearWithEmoticon:(id)arg1 appearDate:(id)arg2 disappearReason:(long long)arg3 contentVM:(id)arg4 source:(int)arg5 scene:(int)arg6;
+ (id)_bubbleParamsWithEmoticon:(id)arg1 contentVM:(id)arg2;
+ (void)onCellAppear:(id)arg1 scene:(int)arg2;
+ (void)onEmoticonAppearWithTid:(id)arg1 scene:(int)arg2;
+ (void)onPickerAppearWithEmoticon:(id)arg1 postSession:(id)arg2 scene:(int)arg3;
+ (void)onPickerTapWithAction:(unsigned long long)arg1 emoticon:(id)arg2 postSession:(id)arg3 scene:(int)arg4;
+ (id)_pickerParamsWithEmoticon:(id)arg1 postSession:(id)arg2;
+ (void)onLikeListDisappearWithEmoticon:(id)arg1 tid:(id)arg2 likeListType:(unsigned long long)arg3 scene:(int)arg4;
@end
