@interface AppStandardContentBaseMessageCellView : CommonMessageCellView
{
    AppStandardContentSourceView * _sourceView; // +0xb8
}
- (id)sourceHeadViewInSize:(CGSize)arg1;
- (void)prepareForReuse;
- (void)initSourceView;
- (void)onSourceTitleUpdated;
- (void)onSourceIconUpdated;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (void).cxx_destruct;
@end
