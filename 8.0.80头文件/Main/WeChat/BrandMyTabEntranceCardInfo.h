@interface BrandMyTabEntranceCardInfo : NSObject
{
    BOOL _hasBiz; // +0x8
    BOOL _showWriteArticle; // +0x9
    BOOL _showRegisterRedDot; // +0xa
    BOOL _showFailedRedDot; // +0xb
    unsigned int _banType; // +0xc
    unsigned int _verifyFlag; // +0x10
    NSString * _userName; // +0x18
    NSString * _headImgUrl; // +0x20
    NSString * _nickName; // +0x28
    NSString * _fansText; // +0x30
    NSString * _tips; // +0x38
    NSString * _banUrl; // +0x40
    NSString * _notifyText; // +0x48
    FinderJumpInfo * _notifyJumpInfo; // +0x50
    WCFinderRedDotCtrlInfo * _notifyCtrlInfo; // +0x58
}
- (id)banTips;
- (BOOL)hasBiz;
- (void)setHasBiz:(BOOL)arg1;
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
- (unsigned int)verifyFlag;
- (void)setVerifyFlag:(unsigned int)arg1;
- (BOOL)showWriteArticle;
- (void)setShowWriteArticle:(BOOL)arg1;
- (BOOL)showRegisterRedDot;
- (void)setShowRegisterRedDot:(BOOL)arg1;
- (id)notifyText;
- (void)setNotifyText:(id)arg1;
- (BOOL)showFailedRedDot;
- (void)setShowFailedRedDot:(BOOL)arg1;
- (id)notifyJumpInfo;
- (void)setNotifyJumpInfo:(id)arg1;
- (id)notifyCtrlInfo;
- (void)setNotifyCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end
