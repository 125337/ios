@interface WCTogetherTailReporter : NSObject
{
    NSMutableDictionary * _operationDictionary; // +0x8
    long long _scene; // +0x10
}
- (id)operationDictionary;
- (id)getOrCreateOperationWithDataItem:(id)arg1;
- (void)clearOperationDictionary;
- (BOOL)isDataItemValid:(id)arg1;
- (void)didDisplayDataItem:(id)arg1;
- (void)didClickDataItem:(id)arg1;
- (void)report;
- (id)generateLogStringWithOperation:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end
