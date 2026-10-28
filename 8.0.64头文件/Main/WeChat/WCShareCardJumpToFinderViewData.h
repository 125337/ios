@interface WCShareCardJumpToFinderViewData : NSObject
{
    WCCardDataCardInfo * _cardInfo; // +0x8
    NSString * _feedId; // +0x10
    NSString * _nonceId; // +0x18
    NSString * _leftIconUrl; // +0x20
    NSString * _rightIconUrl; // +0x28
    NSString * _finderUsername; // +0x30
    NSString * _title; // +0x38
}
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)leftIconUrl;
- (void)setLeftIconUrl:(id)arg1;
- (id)rightIconUrl;
- (void)setRightIconUrl:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
