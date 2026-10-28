@interface BrandMyTabEntranceCardInfo : NSObject
{
    BOOL _showWriteArticle; // +0x8
    unsigned int _banType; // +0xc
    NSString * _userName; // +0x10
    NSString * _headImgUrl; // +0x18
    NSString * _nickName; // +0x20
    NSString * _fansText; // +0x28
    NSString * _tips; // +0x30
    NSString * _banUrl; // +0x38
    NSString * _notifyText; // +0x40
}
- (id)banTips;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)fansText;
- (void)setFansText:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (unsigned int)banType;
- (void)setBanType:(unsigned int)arg1;
- (id)banUrl;
- (void)setBanUrl:(id)arg1;
- (BOOL)showWriteArticle;
- (void)setShowWriteArticle:(BOOL)arg1;
- (id)notifyText;
- (void)setNotifyText:(id)arg1;
- (void).cxx_destruct;
@end
