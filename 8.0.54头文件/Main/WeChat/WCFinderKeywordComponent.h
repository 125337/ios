@interface WCFinderKeywordComponent : NSObject
{
    NSString * _componentId; // +0x8
    NSMutableDictionary * _keywordMap; // +0x10
}
+ (void)reportClickCommentKeyword:(WCFinderKeywordAction)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
+ (void)reportExposeCommentKeyword:(WCFinderKeywordAction)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
+ (void)reportExposeKeywordJumpInfo:(id)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
+ (void)reportClickCommentJumpInfo:(id)arg1 scene:(int)arg2 action:(long long)arg3 fromVC:(id)arg4 tid:(id)arg5 indexPath:(id)arg6 extra:(id)arg7;
+ (int)contextCommentSceneFromView:(id)arg1;
+ (BOOL)isFinderKeywordJumpUrl:(id)arg1;
+ (multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>>)keywordHiglightFrameInStyleArray:(id)arg1;
+ (id)findKeywordInRect:(CGRect)arg1 withKeywordMap:(const void *)arg2;
- (id)init;
- (id)initWithKeywordArray:(id)arg1 componentId:(id)arg2;
- (id)allKeywordInfos;
- (WCFinderKeywordAction)actionForKeywordUrl:(id)arg1;
- (id)parseXMLForString:(id)arg1;
- (id)paseContentFromNode:(XmlReaderNode_t *)arg1;
- (void)parseNode:(XmlReaderNode_t *)arg1 readContentTo:(id)arg2;
- (id)_linkForKeywordId:(id)arg1 text:(id)arg2;
- (id)_displayIconForKeywordId:(id)arg1;
- (id)ensureJumpInfoSearchWord:(id)arg1 link:(id)arg2;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (id)keywordMap;
- (void)setKeywordMap:(id)arg1;
- (void).cxx_destruct;
@end

