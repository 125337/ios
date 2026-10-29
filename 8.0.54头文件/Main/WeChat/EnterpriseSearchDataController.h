@interface EnterpriseSearchDataController : NSObject <PBMessageObserverDelegate>
{
    id <EnterpriseSearchDataControllerDelegate> _delegate; // +0x8
    NSMutableDictionary * _dicLocalContact; // +0x10
    NSMutableDictionary * _dicLocalGroup; // +0x18
    NSMutableDictionary * _dicLocalApplication; // +0x20
    NSMutableDictionary * _dicRemoteContactResult; // +0x28
    NSString * _brandUserName; // +0x30
}
- (id)initWithBrandUserName:(id)arg1 delegate:(id)arg2;
- (void)initData;
- (id)localSearchWithKeyword:(id)arg1 range:(unsigned int)arg2;
- (id)remoteSearchResultWithKeyword:(id)arg1 range:(unsigned int)arg2;
- (BOOL)remoteSearchMoreWithKeyword:(id)arg1 range:(unsigned int)arg2 error:(BOOL *)arg3;
- (void)clearSearchResult;
- (BOOL)makeBizChatContactSearchReq:(id)arg1 offset:(unsigned int)arg2;
- (void)handleBizChatContactSearchResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)brandUserName;
- (void).cxx_destruct;
@end

