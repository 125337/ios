@interface MJMovieTextSuggestionViewCellItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _viewerNumber; // +0x10
    double _titleLabelWidth; // +0x18
    double _viewerNumberLabelWidth; // +0x20
}
+ (id)itemWithSuggestion:(id)arg1;
+ (id)itemsWithSuggestions:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)title;
- (id)viewerNumber;
- (double)titleLabelWidth;
- (double)viewerNumberLabelWidth;
- (void).cxx_destruct;
@end

