@interface WCTogetherFeedViewSection : NSObject
{
    BOOL _showsFooterSeparatorLine; // +0x8
    NSString * _yearText; // +0x10
    NSString * _dayText; // +0x18
    NSString * _dateText; // +0x20
    NSMutableArray * _viewItems; // +0x28
}
- (id)init;
- (Class)headerViewClass;
- (Class)footerViewClass;
- (id)yearText;
- (void)setYearText:(id)arg1;
- (id)dayText;
- (void)setDayText:(id)arg1;
- (id)dateText;
- (void)setDateText:(id)arg1;
- (BOOL)showsFooterSeparatorLine;
- (void)setShowsFooterSeparatorLine:(BOOL)arg1;
- (id)viewItems;
- (void)setViewItems:(id)arg1;
- (void).cxx_destruct;
@end

