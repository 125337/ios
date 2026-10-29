@interface BrandProfileTopicViewModel : NSObject
{
    double _foldViewHeight; // +0x8
    double _unfoldViewHeight; // +0x10
    BOOL _isUnfold; // +0x18
    BOOL _hasUnfoldButton; // +0x19
    BOOL _hasMultiLines; // +0x1a
    double _unfoldButtonCenterY; // +0x20
    NSArray * _topicInfoList; // +0x28
}
+ (id)generateTopicAttrStr:(id)arg1 containerWidth:(double)arg2;
+ (id)generateTopicButton;
- (id)init;
- (void)setTopicInfoList:(id)arg1;
- (void)setIsUnfold:(BOOL)arg1;
- (void)updateHasUnfoldButton;
- (double)viewHeight;
- (void)fillTopicButtonFoldInfo;
- (double)topicButtonMaxWidth;
- (double)topicButtonFillThresholdWidth;
- (BOOL)isUnfold;
- (BOOL)hasUnfoldButton;
- (void)setHasUnfoldButton:(BOOL)arg1;
- (BOOL)hasMultiLines;
- (double)unfoldButtonCenterY;
- (id)topicInfoList;
- (void).cxx_destruct;
@end

