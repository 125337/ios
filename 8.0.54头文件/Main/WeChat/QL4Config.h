@interface QL4Config : NSObject
{
    BOOL _enable; // +0x8
    NSDictionary * _json; // +0x10
}
- (id)initWithJSON:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (id)json;
- (void)setJson:(id)arg1;
- (void).cxx_destruct;
@end

