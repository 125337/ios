@interface WXGRoamBannerView : UIView <IRoamBackupPackageServiceExt>
{
    BOOL _isLeftStyle; // +0x8
    id <WXGRoamBannerViewDelegate> _delegate; // +0x10
    long long _curIndex; // +0x18
    unsigned long long _curNotify; // +0x20
    UILabel * _leftLabel; // +0x28
    UIView * _labelIconView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapToShowDetail;
- (void)setIsLeftStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateNotifyCode;
- (BOOL)isMultiPackageBackingup;
- (BOOL)isMultiPackageHasBannerStatus;
- (void)updateBanner;
- (void)updateBannerFrame;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)arg1 notifyCode:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)arg1 current:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)setUiLabelAutoNewLine:(id)arg1;
- (BOOL)isLeftStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)curIndex;
- (void)setCurIndex:(long long)arg1;
- (unsigned long long)curNotify;
- (void)setCurNotify:(unsigned long long)arg1;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg1;
- (id)labelIconView;
- (void)setLabelIconView:(id)arg1;
- (void).cxx_destruct;
@end
