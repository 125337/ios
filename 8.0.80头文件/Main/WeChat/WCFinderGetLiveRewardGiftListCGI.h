@interface WCFinderGetLiveRewardGiftListCGI : WCFinderLiveBaseCgi
{
    BOOL _chooseGift; // +0x8
    unsigned int _pullScene; // +0xc
    unsigned int _groupId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    NSData * _liveCookies; // +0x30
    NSData * _lastBuffer; // +0x38
}
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 pullScene:(unsigned int)arg3 chooseGift:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 pullScene:(unsigned int)arg3 chooseGift:(BOOL)arg4 groupId:(unsigned int)arg5 lastBuffer:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)pullScene;
- (void)setPullScene:(unsigned int)arg1;
- (BOOL)chooseGift;
- (void)setChooseGift:(BOOL)arg1;
- (unsigned int)groupId;
- (void)setGroupId:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
