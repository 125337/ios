@interface WCFinderMessageVerifyItem : NSObject <NSCopying>
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _relativePath; // +0x18
    NSString * _sceneNote; // +0x20
    NSString * _scene; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)getTextFrom:(XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)relativePath;
- (void)setRelativePath:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (void).cxx_destruct;
@end

