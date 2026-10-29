@interface CustomMenuButton : UIButton
{
    NSString * m_btnId; // +0x8
    NSString * m_btnKey; // +0x10
    NSString * m_btnName; // +0x18
    NSString * m_btnValue; // +0x20
    NSString * m_btnNativeUrl; // +0x28
    long long m_btnType; // +0x30
    long long m_btnActionType; // +0x38
    long long m_btnIndex; // +0x40
    BOOL _isForPayRelatedSession; // +0x48
    BOOL _isSubMenu; // +0x49
    BOOL _isSubMenuListHasIcon; // +0x4a
    unsigned long long _showIconType; // +0x50
    MMWebImageView * _leftIconImageView; // +0x58
    MpEcsJumpInfo * _menuEcsJumpInfo; // +0x60
}
+ (int)serverType2LocalCustom:(long long)arg1;
+ (long long)localCustomActionType2ServerType:(long long)arg1;
+ (int)serverActionType2LocalCustomType:(long long)arg1;
+ (id)getScanJsonContentFromScanType:(id)arg1 scanResult:(id)arg2 rawData:(id)arg3;
+ (id)getPicsJsonContentFromPicMd5List:(id)arg1;
+ (id)getPOIJsonContentFromSelectPOIInfo:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setLeftIcon:(id)arg1;
- (void)setLeftIconUrl:(id)arg1;
- (id)m_btnId;
- (void)setM_btnId:(id)arg1;
- (id)m_btnKey;
- (void)setM_btnKey:(id)arg1;
- (id)m_btnName;
- (void)setM_btnName:(id)arg1;
- (id)m_btnValue;
- (void)setM_btnValue:(id)arg1;
- (id)m_btnNativeUrl;
- (void)setM_btnNativeUrl:(id)arg1;
- (long long)m_btnType;
- (void)setM_btnType:(long long)arg1;
- (long long)m_btnActionType;
- (void)setM_btnActionType:(long long)arg1;
- (long long)m_btnIndex;
- (void)setM_btnIndex:(long long)arg1;
- (unsigned long long)showIconType;
- (void)setShowIconType:(unsigned long long)arg1;
- (id)leftIconImageView;
- (void)setLeftIconImageView:(id)arg1;
- (BOOL)isForPayRelatedSession;
- (void)setIsForPayRelatedSession:(BOOL)arg1;
- (BOOL)isSubMenu;
- (void)setIsSubMenu:(BOOL)arg1;
- (BOOL)isSubMenuListHasIcon;
- (void)setIsSubMenuListHasIcon:(BOOL)arg1;
- (id)menuEcsJumpInfo;
- (void)setMenuEcsJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
