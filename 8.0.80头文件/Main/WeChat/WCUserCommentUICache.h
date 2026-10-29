@interface WCUserCommentUICache : NSObject
{
    WCUserComment * m_userComment; // +0x8
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentHeight; // +0x10
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userCommentLayoutStyles; // +0x38
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_showDetailContentHeight; // +0x60
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_showDetailLayoutStyles; // +0x88
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_tigerContentHeight; // +0xb0
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_tigerContentLayoutStyles; // +0xd8
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springIconContentHeight; // +0x100
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springIconContentLayoutStyles; // +0x128
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_transContentHeight; // +0x150
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userTransCommentLayoutStyles; // +0x178
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_adSpecialContentHeight; // +0x1a0
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_adSpecialContentLayoutStyles; // +0x1c8
    BOOL _userHasStory; // +0x1f0
    BOOL _refHasStory; // +0x1f1
    BOOL _isEmotionComment; // +0x1f2
    BOOL _isShowDetail; // +0x1f3
}
- (void *)contentHeight;
- (void *)userCommentLayoutStyles;
- (void *)showDetailContentHeight;
- (void *)showDetailLayoutStyles;
- (void *)tigerContentHeight;
- (void *)tigerContentLayoutStyles;
- (void *)springIconContentHeight;
- (void *)springIconContentLayoutStyles;
- (void *)transContentHeight;
- (void *)userTransCommentLayoutStyles;
- (void *)adSpecialContentHeight;
- (void *)adSpecialContentLayoutStyles;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)userComment;
- (void)setUserComment:(id)arg1;
- (BOOL)userHasStory;
- (void)setUserHasStory:(BOOL)arg1;
- (BOOL)refHasStory;
- (void)setRefHasStory:(BOOL)arg1;
- (BOOL)isEmotionComment;
- (void)setIsEmotionComment:(BOOL)arg1;
- (BOOL)isShowDetail;
- (void)setIsShowDetail:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
