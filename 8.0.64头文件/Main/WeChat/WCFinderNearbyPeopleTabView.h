@interface WCFinderNearbyPeopleTabView : UIView <ISettingExtChange, WCFinderTabViewProtocol>
{
    id <WCFinderTabViewDelegate> delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    NSString * _bindPath; // +0x18
    UIView * _redDotView; // +0x20
}
- (id)init;
- (void)sizeToFit;
- (id)titleLabel;
- (void)updateForState:(unsigned long long)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)processRedDotView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)bindPath;
- (void)setBindPath:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
