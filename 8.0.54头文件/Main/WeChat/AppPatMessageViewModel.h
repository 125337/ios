@interface AppPatMessageViewModel : BaseMessageViewModel
{
    BOOL _needFold; // +0x5a
    NSArray * _patStylesArray; // +0x60
    NSArray * _patBackgroundSizes; // +0x68
    AppPatMessageRefreshContext * _refreshContext; // +0x70
    CGSize _expandButtonSize; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (void)setReadFromIndexes:(id)arg1 cellView:(id)arg2;
- (BOOL)isRead;
- (BOOL)needCleanRefresh;
- (void)markCleanRefreshed;
- (void)updateTimeOffset:(double)arg1 forContentId:(id)arg2;
- (double)getTimeOffsetForContentId:(id)arg1;
- (double)textFontSize;
- (unsigned long long)parserType;
- (id)patMessageWrap;
- (BOOL)needFold;
- (void)setNeedFold:(BOOL)arg1;
- (id)patStylesArray;
- (void)setPatStylesArray:(id)arg1;
- (id)patBackgroundSizes;
- (void)setPatBackgroundSizes:(id)arg1;
- (CGSize)expandButtonSize;
- (void)setExpandButtonSize:(CGSize)arg1;
- (id)refreshContext;
- (void)setRefreshContext:(id)arg1;
- (void).cxx_destruct;
@end

