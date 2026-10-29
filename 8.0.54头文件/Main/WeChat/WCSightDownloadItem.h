@interface WCSightDownloadItem : MMObject
{
    BOOL _isPreload; // +0x8
    unsigned int _scene; // +0xc
    unsigned long long _startTime; // +0x10
}
+ (id)itemWithStartTime:(unsigned long long)arg1 isPreload:(BOOL)arg2 scene:(unsigned int)arg3;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
@end

