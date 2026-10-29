@interface TextStateNewXMLLogic : NSObject <IMsgExt>
{
    id <TextStateNewXMLLogicDelegate> _delegate; // +0x8
    NSMutableDictionary * _typeToHandlerMap; // +0x10
}
+ (id)newXMLTypeList;
+ (BOOL)isBypassChannelSupportedForType:(id)arg1;
- (id)init;
- (void)initData;
- (void)initHandler;
- (void)registerNewXMLType:(id)arg1 withHandler:(id /* block */)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)initModTextStatusHandler;
- (void)initTextStatusLikeHandler;
- (void)initTextStatusCommentHandler;
- (void)initTextStatusIconConfigRefreshHandler;
- (void)initStatusNewModifyHandler;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)typeToHandlerMap;
- (void)setTypeToHandlerMap:(id)arg1;
- (void).cxx_destruct;
@end

