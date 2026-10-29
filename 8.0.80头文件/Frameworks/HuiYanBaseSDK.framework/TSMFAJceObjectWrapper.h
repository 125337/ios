@interface TSMFAJceObjectWrapper : NSObject
{
    void * * creation; // +0x8
    void * * deletion; // +0x10
    void * _JceObject; // +0x18
}
+ (id)JceObjectWrapperForCommandID:(int)arg1;
- (id)initWithCreatFunction:(void *)arg1 DeleteFunction:(void *)arg2;
- (void)dealloc;
- (int)readFromData:(id)arg1;
- (int)writeToData:(id)arg1;
- (BOOL)jceObjectIsMemberOfClassByName:(id)arg1;
- (void *)JceObject;
- (void)setJceObject:(void *)arg1;
@end
