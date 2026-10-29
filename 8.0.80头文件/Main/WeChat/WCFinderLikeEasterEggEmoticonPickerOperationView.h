@interface WCFinderLikeEasterEggEmoticonPickerOperationView : UIView
{
    BOOL _hasEasterEgg; // +0x8
    id /* block */ _onDelete; // +0x10
    id /* block */ _onPreview; // +0x18
    UILabel * _deleteLabel; // +0x20
    UIView * _dividingLine; // +0x28
    UILabel * _previewLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)setHasEasterEgg:(BOOL)arg1;
- (void)_layoutSubviews;
- (void)sizeToFit;
- (void)_onDelete;
- (void)_onPreview;
- (id)deleteLabel;
- (id)dividingLine;
- (id)previewLabel;
- (BOOL)hasEasterEgg;
- (id /* block */)onDelete;
- (void)setOnDelete:(id /* block */)arg1;
- (id /* block */)onPreview;
- (void)setOnPreview:(id /* block */)arg1;
- (void)setDeleteLabel:(id)arg1;
- (void)setDividingLine:(id)arg1;
- (void)setPreviewLabel:(id)arg1;
- (void).cxx_destruct;
@end
