@interface WCDataItemUICache : NSObject
{
    WCDataItem * m_dataItem; // +0x8
    NSMutableDictionary * m_dicLayerIdShowTipView; // +0x10
    BOOL m_isShowDetail; // +0x18
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentDescHeight; // +0x20
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentDescFoldHeight; // +0x48
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>>[4] m_contentDescLayoutStyles; // +0x70
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_likeUserHeight; // +0x110
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_likeUserLayoutStyles; // +0x138
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springContentDescHeight; // +0x160
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springContentDescFoldHeight; // +0x188
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>>[4] m_springContentDescLayoutStyles; // +0x1b0
    unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springLikeUserHeight; // +0x250
    unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springLikeUserLayoutStyles; // +0x278
    NSMutableArray * _usersHasUnreadStory; // +0x2a0
}
- (void *)contentDescHeight;
- (void *)contentDescFoldHeight;
- (void *)contentDescLayoutStyles;
- (void *)likeUserHeight;
- (void *)likeUserLayoutStyles;
- (BOOL)isEmpty;
- (void)dealloc;
- (void *)springContentDescHeight;
- (void *)springContentDescFoldHeight;
- (void *)springContentDescLayoutStyles;
- (void *)springLikeUserHeight;
- (void *)springLikeUserLayoutStyles;
- (void)clearSpringCache;
- (BOOL)isSpringCacheEmpty;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isShowDetail;
- (void)setIsShowDetail:(BOOL)arg1;
- (id)dicLayerIdShowTipView;
- (void)setDicLayerIdShowTipView:(id)arg1;
- (id)usersHasUnreadStory;
- (void)setUsersHasUnreadStory:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

