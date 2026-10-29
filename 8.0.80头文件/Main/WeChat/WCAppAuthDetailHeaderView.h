@interface WCAppAuthDetailHeaderView : UIView
{
    BOOL _isAppType; // +0x8
    WCAppAuthAppMetaInfo * _appInfo; // +0x10
    NSString * _desc; // +0x18
    MMWebImageView * _appIconView; // +0x20
    MMUILabel * _appNameLabel; // +0x28
    MMUILabel * _appTypeLabel; // +0x30
    UIView * _appTypeBgView; // +0x38
    MMUILabel * _descLabel; // +0x40
}
- (id)initWithAppInfo:(id)arg1 desc:(id)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)isAppType;
- (void)setIsAppType:(BOOL)arg1;
- (id)appIconView;
- (void)setAppIconView:(id)arg1;
- (id)appNameLabel;
- (void)setAppNameLabel:(id)arg1;
- (id)appTypeLabel;
- (void)setAppTypeLabel:(id)arg1;
- (id)appTypeBgView;
- (void)setAppTypeBgView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
