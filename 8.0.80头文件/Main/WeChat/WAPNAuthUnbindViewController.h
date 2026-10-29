@interface WAPNAuthUnbindViewController : MMUIViewController
{
    BOOL _isOnlySelfUsed; // +0x70
    BOOL _hasInitData; // +0x71
    BOOL _countReady; // +0x72
    id /* block */ _onVerifyExpired; // +0x78
    WAPNAuthCgiHelper * _cgiHelper; // +0x80
    NSString * _mobile; // +0x88
    long long _mobileType; // +0x90
    long long _mobileUserCount; // +0x98
    UILabel * _subtitleLabel; // +0xa0
    UIView * _unbindItemView; // +0xa8
    UILabel * _unbindTitleLabel; // +0xb0
    UILabel * _unbindSubTitleLabel; // +0xb8
    UIImageView * _unbindArrowView; // +0xc0
    UIView * _topSeparator; // +0xc8
    UIView * _bottomSeparator; // +0xd0
    MMUIActivityIndicatorView * _loading; // +0xd8
}
- (id)initWithCgiHelper:(id)arg1 mobile:(id)arg2 mobileType:(long long)arg3 mobileUserCount:(long long)arg4 isOnlySelfUsed:(BOOL)arg5 hasInitData:(BOOL)arg6;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)buildViews;
- (void)refreshUI;
- (void)fetchMobileUserCount;
- (void)onTapUnbind;
- (id /* block */)onVerifyExpired;
- (void)setOnVerifyExpired:(id /* block */)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (long long)mobileType;
- (void)setMobileType:(long long)arg1;
- (long long)mobileUserCount;
- (void)setMobileUserCount:(long long)arg1;
- (BOOL)isOnlySelfUsed;
- (void)setIsOnlySelfUsed:(BOOL)arg1;
- (BOOL)hasInitData;
- (void)setHasInitData:(BOOL)arg1;
- (BOOL)countReady;
- (void)setCountReady:(BOOL)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)unbindItemView;
- (void)setUnbindItemView:(id)arg1;
- (id)unbindTitleLabel;
- (void)setUnbindTitleLabel:(id)arg1;
- (id)unbindSubTitleLabel;
- (void)setUnbindSubTitleLabel:(id)arg1;
- (id)unbindArrowView;
- (void)setUnbindArrowView:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (id)bottomSeparator;
- (void)setBottomSeparator:(id)arg1;
- (id)loading;
- (void)setLoading:(id)arg1;
- (void).cxx_destruct;
@end
