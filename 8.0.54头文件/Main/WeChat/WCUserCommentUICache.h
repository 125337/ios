@interface WCUserCommentUICache : NSObject
{
    WCUserComment * m_userComment; // +0x8
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentHeight; // +0x10
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userCommentLayoutStyles; // +0x38
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_tigerContentHeight; // +0x60
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_tigerContentLayoutStyles; // +0x88
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springIconContentHeight; // +0xb0
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springIconContentLayoutStyles; // +0xd8
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_transContentHeight; // +0x100
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userTransCommentLayoutStyles; // +0x128
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_adSpecialContentHeight; // +0x150
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_adSpecialContentLayoutStyles; // +0x178
    BOOL _userHasStory; // +0x1a0
    BOOL _refHasStory; // +0x1a1
    BOOL _isEmotionComment; // +0x1a2
}
- (void *)contentHeight;
- (void *)userCommentLayoutStyles;
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
- (void).cxx_destruct;
- (id).cxx_construct;
@end

