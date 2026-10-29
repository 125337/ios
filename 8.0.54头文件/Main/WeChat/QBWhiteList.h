@interface QBWhiteList : NSObject
{
    NSMutableArray * _whiteList; // +0x8
    NSMutableArray * _predicateList; // +0x10
    NSMutableDictionary * _whiteListDic; // +0x18
    NSString * _fileName; // +0x20
    unsigned long long _FixedWhiteListCount; // +0x28
}
- (void)doInit;
- (id)initWithFileName:(id)arg1;
- (void)loadDataFromFile;
- (id)init;
- (BOOL)addHost:(id)arg1;
- (void)setWhiteList:(id)arg1;
- (void)setWhiteList:(id)arg1 cached:(BOOL)arg2;
- (BOOL)isInWhiteListWithURL:(id)arg1;
- (BOOL)isInWhiteListWithHost:(id)arg1;
- (void)removeAllObjects;
- (void)removeTempObjects;
- (void).cxx_destruct;
@end

