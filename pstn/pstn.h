#ifndef __PSTN_H__
#define __PSTN_H__

#define FXO_SET_HANGUP			0x00 //�һ�
#define FXO_SET_PICKUP2CALL		0x01 //ժ������
#define FXO_SET_TALK 			0x02 //ͨ��
#define FXO_SET_RCV_RING 		0x03 //��������
#define FXO_EN_REMOTE_SPEAK		0x04 //����Զ˵绰�û�����
#define FXO_DIS_REMOTE_SPEAK 	0x05 //��ֹ�Զ˵绰�û�����
#define FXO_EN_REMOTE_LISTEN 	0x06 //����Զ˵绰�û������᳡����
#define FXO_DIS_REMOTE_LISTEN 	0x07 //��ֹ�Զ˵绰�û������᳡����
#define FXO_GET_STATE		 	0x80 //��ѯFXO��ǰ״̬

//FXO_GET_STATE
#define FXO_STATE_RING		0x00   //����
#define FXO_STATE_PICKUP 	0x01   //ժ��
#define FXO_STATE_HANGUP 	0x02   //�һ�

#endif
