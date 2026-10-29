@interface CBTCoopV2HorizontalCardGroupViewModel : CBTCoopV2AsstBoardViewModel
{
    NSArray * _childViewModels; // +0x8
    NSString * _groupIdentifier; // +0x10
}
- (id)initWithChildViewModels:(id)arg1 groupIdentifier:(id)arg2;
- (id)getCellReuseId;
- (CGSize)itemSizeAtIndex:(long long)arg1 availableWidth:(double)arg2;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)isForwardable;
- (BOOL)participatesInMultiSelectUI;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)childViewModels;
- (void)setChildViewModels:(id)arg1;
- (id)groupIdentifier;
- (void)setGroupIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
