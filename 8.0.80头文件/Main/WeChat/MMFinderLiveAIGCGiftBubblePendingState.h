@interface MMFinderLiveAIGCGiftBubblePendingState : NSObject
{
    BOOL _generateSuccess; // +0x8
    MMFinderLiveRewardGiftItem * _gift; // +0x10
    NSString * _giftId; // +0x18
    AudienceAiCustomGiftInfo * _aigcInfo; // +0x20
    NSDate * _createTime; // +0x28
}
- (id)initWithGift:(id)arg1 generateSuccess:(BOOL)arg2 aigcInfo:(id)arg3;
- (id)description;
- (id)gift;
- (id)giftId;
- (BOOL)generateSuccess;
- (id)aigcInfo;
- (id)createTime;
- (void).cxx_destruct;
@end
