@interface TXCMetalShaders : NSObject
+ (id)defaultVertexFuncName;
+ (id)defaultFragmentFuncName;
+ (id)basicVertexFunc;
+ (id)twoInputVertexFunc;
+ (id)bgraFragmentFunc;
+ (id)rgbaFragmentFunc;
+ (id)buildShaderSourceWithFragmentSource:(id)arg1;
+ (id)buildShaderSourceWithVertexSource:(id)arg1 fragmentSource:(id)arg2;
@end

