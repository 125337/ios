@interface FavRelatedTagView : MMUIView
{
    MMUILabel * m_title; // +0x8
    NSMutableArray * m_tagList; // +0x10
    NSMutableArray * m_tagBtnsArray; // +0x18
    NSMutableArray * m_tagBtnTitles; // +0x20
    id <FavRelatedTagDelegate> _delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initTitleLabel;
- (void)setTitle:(id)arg1;
- (void)setTagList:(id)arg1 highlightKeyWords:(id)arg2;
- (void)sethighLightKeyWords:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (id)getAllTagList;
- (long long)indexOfTag:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
