@interface MMFinderLiveAIGCGiftState : NSObject
{
    BOOL _isReCustomizing; // +0x8
    MMFinderLiveRewardGiftItem * _gift; // +0x10
    NSString * _uploadedCoverImageUrl; // +0x18
    NSString * _aigcTaskId; // +0x20
    NSString * _uploadId; // +0x28
    unsigned long long _status; // +0x30
}
- (id)initWithGift:(id)arg1;
- (void)reload;
- (void)updateGift:(id)arg1;
- (id)giftId;
- (BOOL)canReCustomize;
- (void)reset;
- (id)description;
- (id)gift;
- (void)setGift:(id)arg1;
- (id)uploadedCoverImageUrl;
- (void)setUploadedCoverImageUrl:(id)arg1;
- (id)aigcTaskId;
- (void)setAigcTaskId:(id)arg1;
- (id)uploadId;
- (void)setUploadId:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)isReCustomizing;
- (void)setIsReCustomizing:(BOOL)arg1;
- (void).cxx_destruct;
@end
