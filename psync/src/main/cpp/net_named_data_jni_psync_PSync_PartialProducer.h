/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_named_data_jni_psync_PSync_PartialProducer */

#ifndef _Included_net_named_data_jni_psync_PSync_PartialProducer
#define _Included_net_named_data_jni_psync_PSync_PartialProducer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    startPartialProducer
 * Signature: (ILjava/lang/String;Ljava/lang/String;JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_startPartialProducer
  (JNIEnv *, jobject, jint, jstring, jstring, jlong, jlong);

/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    stop
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_stop
  (JNIEnv *, jobject, jobject);

/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    addUserNode
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_addUserNode
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    removeUserNode
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_removeUserNode
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    getSeqNo
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_getSeqNo
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     net_named_data_jni_psync_PSync_PartialProducer
 * Method:    publishName
 * Signature: (Ljava/nio/ByteBuffer;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_named_1data_jni_psync_PSync_00024PartialProducer_publishName
  (JNIEnv *, jobject, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
