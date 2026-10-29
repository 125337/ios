@interface MJMovieTextSuggestion : NSObject
{
    NSString * _title; // +0x8
    NSString * _viewerNumber; // +0x10
}
+ (id)suggestionWithRecommendTitleInfo:(id)arg1;
+ (id)suggestionsWithRecommendTitleInfos:(id)arg1;
- (id)initWithRecommendTitleInfo:(id)arg1;
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)viewerNumber;
- (void)setViewerNumber:(id)arg1;
- (void).cxx_destruct;
@end
