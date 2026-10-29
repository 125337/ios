@interface MMFinderLiveCommonSettingCell : WCTableViewNormalCellManager
{
    MMFinderLiveShopSettingsSelectItemView * _contentView; // +0x8
    id /* block */ _selectCallback; // +0x10
}
- (id)initWithSize:(CGSize)arg1;
- (void)initCellConfig;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)selectCallback;
- (void)setSelectCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
