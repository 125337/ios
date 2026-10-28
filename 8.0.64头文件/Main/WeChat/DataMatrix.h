@interface DataMatrix : NSObject
{
    int dim; // +0x8
    BOOL * * data; // +0x10
}
- (id)initWith:(int)arg1;
- (int)dimension;
- (void)set:(BOOL)arg1 x:(int)arg2 y:(int)arg3;
- (BOOL)valueAt:(int)arg1 y:(int)arg2;
- (id)toString;
- (void)dealloc;
@end
