@interface MMFinderLiveSwitchSettingCell : WCTableViewNormalCellManager
{
    MMFinderLiveShopSettingsSwitchItemView * _contentView; // +0x8
    id /* block */ _onSwitchChange; // +0x10
}
- (id)initWithSize:(CGSize)arg1;
- (void)initCellConfig;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)onSwitchChange;
- (void)setOnSwitchChange:(id /* block */)arg1;
- (void).cxx_destruct;
@end
