@interface ReaderMessageFolderViewModel : ReaderMessageViewModel
{
    unsigned long long _status; // +0x90
    NSMutableArray * _viewModelList; // +0x98
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)messageFolder;
- (void)addReaderViewModel:(id)arg1;
- (void)addReaderViewModelList:(id)arg1;
- (unsigned long long)collapsedDisplayViewCount;
- (void)updateViewPositions;
- (double)calcuateWidth;
- (double)calcuateHeight;
- (double)collapsedHeight;
- (double)expandedHeight;
- (double)expandedVertialSpacing;
- (double)collapsedVertialSpacing;
- (double)animationDuration;
- (BOOL)isExpanded;
- (BOOL)isCollapsed;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (void)resetLayoutCache;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)viewModelList;
- (void)setViewModelList:(id)arg1;
- (void).cxx_destruct;
@end
