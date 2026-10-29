@interface TencentLBSDataHandler : NSObject
+ (id)zlibCompressData:(id)arg1;
+ (id)zlibUncompressData:(id)arg1;
+ (id)AES256EncryptWithKey:(id)arg1 withData:(id)arg2;
+ (id)AES256DecryptWithKey:(id)arg1 withData:(id)arg2;
+ (id)gzipData:(id)arg1;
+ (id)ungzipData:(id)arg1;
+ (id)confuseData:(id)arg1 random:(int)arg2 flag:(BOOL)arg3;
+ (id)confuseData:(id)arg1;
+ (CLLocationCoordinate2D)WGS84TOGCJ02:(CLLocationCoordinate2D)arg1;
+ (id)md5:(id)arg1;
+ (id)createCLLocWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 origin:(id)arg8;
@end

