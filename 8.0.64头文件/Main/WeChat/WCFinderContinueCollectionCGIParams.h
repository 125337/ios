@interface WCFinderContinueCollectionCGIParams : NSObject
{
    int _scene; // +0x8
    NSData * _lastBuffer; // +0x10
    NSData * _pageBuffer; // +0x18
}
+ (id)paramsWithScene:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (void).cxx_destruct;
@end
