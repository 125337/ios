@interface EdgeComputingJsApiReadEdgeDBData : EdgeComputingJsApiBase
{
    EdgeComputingDBService * _dBService; // +0x8
    NSMutableArray * _dbQueryKeyCache; // +0x10
    NSMutableDictionary * _dbQueryValueCache; // +0x18
}
- (id)init;
- (BOOL)registerIntoContext:(id)arg1;
- (id)logic:(id)arg1;
- (id)functionName;
- (unsigned int)getType;
- (void)clear;
- (void).cxx_destruct;
@end
