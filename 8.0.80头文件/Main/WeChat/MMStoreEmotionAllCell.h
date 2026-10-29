@interface MMStoreEmotionAllCell : MMStoreEmotionBaseAllCell
{
    id <MMStoreEmotionAllCellDelegate> _delegate; // +0x8
}
- (id)m_storeItem;
- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)arg1 Entrance:(unsigned int)arg2;
- (void)changeLayoutForFirstCell;
- (void)changeLayoutForLastCell;
- (void)updateCellCornerRadiusFor:(BOOL)arg1 isFirst:(BOOL)arg2;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
