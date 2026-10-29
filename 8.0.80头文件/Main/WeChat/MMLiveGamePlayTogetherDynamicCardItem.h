@interface MMLiveGamePlayTogetherDynamicCardItem : MMLiveGamePlayTogetherOperationItem
{
    double _contentWidth; // +0x8
    GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem * _internalDynamicItem; // +0x10
}
- (id)initWithModel:(id)arg1 contentWidth:(double)arg2;
- (double)heightForCell;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)internalDynamicItem;
- (void)setInternalDynamicItem:(id)arg1;
- (void).cxx_destruct;
@end
