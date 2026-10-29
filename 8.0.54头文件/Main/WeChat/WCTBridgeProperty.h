@interface WCTBridgeProperty : NSObject
{
    const void * m_innerProperty; // +0x8
}
+ (id)creatBridgeProperty:(const void *)arg1;
- (id)propertyName;
- (const void *)wctProperty;
- (const void *)tableBinding;
@end

