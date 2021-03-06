/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLResource, VGLContext;

@interface VGLVertexArrayObject : NSObject <NSCoding> {
    struct SimpleBuffer<unsigned char> { 
        unsigned int _size; 
        unsigned int _capacity; 
        char *_buf; 
    } _vertices;
    struct SimpleBuffer<unsigned short> { 
        unsigned int _size; 
        unsigned int _capacity; 
        unsigned short *_buf; 
    } _indices[2];
    VGLResource *_vao;
    VGLResource *_vbo;
    VGLResource *_ebo[2];
    int _stride;
    struct { int x1; int x2; int x3; } *_attributes;
    int _vertexCount;
    int _indexCount[2];
    int _vertexPrimitiveType[2];
    unsigned int _indexBufferMode;
    unsigned int _bindedIndexBuffer;
    unsigned int _indicesDirty : 1;
    unsigned int _verticesDirty : 1;
    unsigned int _vertexUsage : 2;
    unsigned int _indexUsage : 2;
    unsigned int _attributeCount : 8;
    VGLContext *_context;
    unsigned int _VAO;
}

@property(readonly) unsigned int VAO;
@property(readonly) int vertexCount;
@property(readonly) void* vertices;
@property(readonly) int indexCount;
@property(readonly) unsigned short* indices;
@property(readonly) int currentPrimitiveType;
@property(readonly) unsigned char vertsPerPrimitive;
@property unsigned int indexBufferMode;


- (unsigned int)indexBufferMode;
- (void)checkIndexList:(int)arg1 offset:(int)arg2;
- (int)currentPrimitiveType;
- (int)primitiveTypeForMode:(unsigned int)arg1;
- (unsigned short*)indicesForMode:(unsigned int)arg1;
- (int)indexCountForMode:(unsigned int)arg1;
- (unsigned char)vertsPerPrimitive;
- (void)setIndexBufferMode:(unsigned int)arg1;
- (BOOL)canReserveVertices:(int)arg1;
- (id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const struct { int x1; int x2; int x3; }*)arg3 attributeCount:(unsigned char)arg4 vertices:(const void*)arg5 vertexCount:(int)arg6 indices:(const unsigned short*)arg7 indexCount:(int)arg8;
- (void)resetIndices;
- (void)resetVertices;
- (unsigned int)VAO;
- (id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const struct { int x1; int x2; int x3; }*)arg3 attributeCount:(unsigned char)arg4 vertices:(const void*)arg5 vertexCount:(int)arg6;
- (void)bindWithContext:(id)arg1;
- (void)freezeIndices;
- (void)freezeVertices;
- (void)setPrimitiveType:(int)arg1 forMode:(unsigned int)arg2;
- (int)indexCount;
- (id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const struct { int x1; int x2; int x3; }*)arg3 attributeCount:(unsigned char)arg4 vertexCapacity:(int)arg5;
- (id)initWithStride:(int)arg1 primitiveType:(int)arg2 attributes:(const struct { int x1; int x2; int x3; }*)arg3 attributeCount:(unsigned char)arg4 vertexCapacity:(int)arg5 indexCapacity:(int)arg6;
- (BOOL)mergeMesh:(id)arg1;
- (void)verticesMuted;
- (void*)mutableVertices;
- (void)freeze;
- (unsigned short*)indices;
- (void*)vertices;
- (int)vertexCount;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
