@interface MMFinderLiveBubbleInfo : NSObject
{
    unsigned int _disappearTimeMsWithoutAction; // +0x8
    unsigned int _disappearTimeMsAfterClick; // +0xc
    unsigned int _realnamelikeSendReason; // +0x10
    unsigned int _bubbleStyleType; // +0x14
    long long _bubbleType; // +0x18
    NSString * _bubbleWording; // +0x20
    NSString * _buttonWording; // +0x28
    FinderLiveNoticeInfo * _noticeInfo; // +0x30
    FinderLiveBubbleCreateLiveInfo * _createliveInfo; // +0x38
    FinderLiveBubbleProductGuideInfo * _productGuideInfo; // +0x40
    double _createTime; // +0x48
}
+ (id)generateBubbleInfo:(id)arg1;
+ (id)generateBubbleInfoWithType:(long long)arg1 bubbleWording:(id)arg2 buttonWording:(id)arg3;
- (id)initWithBubbleInfo:(id)arg1;
- (long long)getBubbleTypeFromBubbleInfo:(id)arg1;
- (id)description;
- (long long)bubbleType;
- (void)setBubbleType:(long long)arg1;
- (unsigned int)disappearTimeMsWithoutAction;
- (void)setDisappearTimeMsWithoutAction:(unsigned int)arg1;
- (unsigned int)disappearTimeMsAfterClick;
- (void)setDisappearTimeMsAfterClick:(unsigned int)arg1;
- (id)bubbleWording;
- (void)setBubbleWording:(id)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (unsigned int)realnamelikeSendReason;
- (void)setRealnamelikeSendReason:(unsigned int)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)createliveInfo;
- (void)setCreateliveInfo:(id)arg1;
- (id)productGuideInfo;
- (void)setProductGuideInfo:(id)arg1;
- (unsigned int)bubbleStyleType;
- (void)setBubbleStyleType:(unsigned int)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (void).cxx_destruct;
@end
