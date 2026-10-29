@interface WCSpecialConfigModel : NSObject
{
    unsigned int _logID; // +0x8
    NSString * _pageName; // +0x10
}
- (id)initPageName:(id)arg1 withLogID:(unsigned int)arg2;
- (id)toString;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned int)logID;
- (void)setLogID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

