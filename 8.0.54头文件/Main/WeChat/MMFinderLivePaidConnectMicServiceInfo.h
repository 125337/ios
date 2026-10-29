@interface MMFinderLivePaidConnectMicServiceInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _headImgUrl; // +0x10
    double _rating; // +0x18
    unsigned long long _duration; // +0x20
    unsigned long long _price; // +0x28
    unsigned long long _currentWaitingUserCount; // +0x30
    FinderJumpInfo * _ratingJumpInfo; // +0x38
    MicSetting_PurchaseMicSetting * _correspondingMicSetting; // +0x40
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (double)rating;
- (void)setRating:(double)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)price;
- (void)setPrice:(unsigned long long)arg1;
- (unsigned long long)currentWaitingUserCount;
- (void)setCurrentWaitingUserCount:(unsigned long long)arg1;
- (id)ratingJumpInfo;
- (void)setRatingJumpInfo:(id)arg1;
- (id)correspondingMicSetting;
- (void)setCorrespondingMicSetting:(id)arg1;
- (void).cxx_destruct;
@end

