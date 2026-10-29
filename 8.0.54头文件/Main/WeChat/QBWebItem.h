@interface QBWebItem : NSObject
{
    BOOL _isCanInitEventHasAdded; // +0x8
    int _apnType; // +0xc
    NSURL * _URL; // +0x10
    NSMutableArray * _eventArray; // +0x18
    NSString * _HTTPMethod; // +0x20
    long long _itemType; // +0x28
    long long _statusCode; // +0x30
    NSString * _errorDescription; // +0x38
    long long _directType; // +0x40
    NSString * _MIMEType; // +0x48
    unsigned long long _dataLength; // +0x50
    NSDictionary * _MIMEMap; // +0x58
    double _beginLoadingTimestamp; // +0x60
    double _finishLoadingTimestamp; // +0x68
    NSMutableDictionary * _itemInfo; // +0x70
}
+ (id)itemWithURL:(id)arg1;
- (id)MIMEMap;
- (long long)itemTypeWithFileExtension:(id)arg1;
- (long long)itemTypeWithMIME:(id)arg1;
- (void)parseItemTypeWithEvent:(id)arg1;
- (id)init;
- (void)addEvent:(id)arg1;
- (void)addItemInfoWithKey:(id)arg1 value:(id)arg2 allowDuplicateKey:(BOOL)arg3;
- (id)JSONInfo;
- (id)itemTypeDescription;
- (id)networkDescriptionWithAPN:(int)arg1;
- (id)commonInfo;
- (void).cxx_destruct;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)eventArray;
- (void)setEventArray:(id)arg1;
- (id)HTTPMethod;
- (void)setHTTPMethod:(id)arg1;
- (long long)itemType;
- (void)setItemType:(long long)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (id)errorDescription;
- (void)setErrorDescription:(id)arg1;
- (long long)directType;
- (void)setDirectType:(long long)arg1;
- (int)apnType;
- (void)setApnType:(int)arg1;
- (id)MIMEType;
- (void)setMIMEType:(id)arg1;
- (unsigned long long)dataLength;
- (void)setDataLength:(unsigned long long)arg1;
- (void)setMIMEMap:(id)arg1;
- (double)beginLoadingTimestamp;
- (void)setBeginLoadingTimestamp:(double)arg1;
- (double)finishLoadingTimestamp;
- (void)setFinishLoadingTimestamp:(double)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (BOOL)isCanInitEventHasAdded;
- (void)setIsCanInitEventHasAdded:(BOOL)arg1;
@end

