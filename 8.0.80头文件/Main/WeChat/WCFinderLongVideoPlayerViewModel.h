@interface WCFinderLongVideoPlayerViewModel : NSObject
{
    BOOL _hadMoreRecommend; // +0x8
    BOOL _isRecommendRequesting; // +0x9
    id <WCFinderLongVideoPlayerViewModelDelegate> _delegate; // +0x10
    NSString * _videoId; // +0x18
    NSString * _videoNonceId; // +0x20
    NSString * _encryptedVideoId; // +0x28
    NSString * _fromUserName; // +0x30
    NSString * _toUserName; // +0x38
    NSData * _lastRecommendBuffer; // +0x40
}
- (id)init;
- (int)relatedScene;
- (id)contentVMByMegaVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3;
- (id)contentVMForDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (id)encryptedVideoId;
- (void)setEncryptedVideoId:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (BOOL)hadMoreRecommend;
- (void)setHadMoreRecommend:(BOOL)arg1;
- (id)lastRecommendBuffer;
- (void)setLastRecommendBuffer:(id)arg1;
- (BOOL)isRecommendRequesting;
- (void)setIsRecommendRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end
