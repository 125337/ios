@interface MMNetworkUtil : NSObject
+ (id)getInterfaceFromSocketAddr:(const void *)arg1;
+ (id)getIPFromSocketAddr:(const void *)arg1;
+ (unsigned int)getPortFromSocketAddr:(const void *)arg1;
+ (BOOL)isInternetwork:(const void *)arg1;
+ (BOOL)isIPAddress:(const void *)arg1 equalTo:(const void *)arg2;
+ (BOOL)isLocalhost:(const void *)arg1;
+ (id)deviceNetworkStatistics;
@end
